/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:58:42 by maelmahf          #+#    #+#             */
/*   Updated: 2026/01/14 17:11:35 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


AForm::AForm() : _name("Default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{

}

AForm::AForm(const std::string name, const int sign_grade, const int execute_grade) : _name(name), _isSigned(false), _gradeToSign(sign_grade), _gradeToExecute(execute_grade)
{

}

AForm::AForm(const AForm &other) : _name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{

}

AForm &AForm::operator=(const AForm &other)
{
	_isSigned = other._isSigned;
	return (*this);
}

AForm::~AForm()
{
	
}

// Member function
void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _gradeToSign)
		_isSigned = true;
	else
		throw GradeTooLowException();
}


std::string AForm::getName() const
{
	return (_name);
}

bool AForm::getIsSigned() const
{
	return (_isSigned);
}

int AForm::getGradeToSign() const
{
	return (_gradeToSign);
}

int AForm::getGradeToExecute() const
{
	return (_gradeToExecute);
}

void AForm::setIsSigned(bool isSigned)
{
	_isSigned = isSigned;
}

void AForm::execute(const Bureaucrat &executor) const
{
	if (_isSigned == false)
		throw IsNotSignedException();
	if (_gradeToExecute < executor.getGrade())
		throw GradeTooLowException();

	performAction();
}


const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

const char *AForm::IsNotSignedException::what() const throw()
{
	return ("Form can not be executed, because it is not signed!");
}

std::ostream &operator<<(std::ostream &os,  AForm const &AForm)
{
	os << "Name: " << AForm.getName() << " isSigned: " << AForm.getIsSigned() << " SignGrade: " << AForm.getGradeToSign() << " ExecuteGrade: " << AForm.getGradeToExecute() << std::endl;
	return (os);
}