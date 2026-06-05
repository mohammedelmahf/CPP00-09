/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 09:32:59 by maelmahf          #+#    #+#             */
/*   Updated: 2025/12/02 09:42:33 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor called" << std::endl;
    ideas[0] = "I want to eat fish";
    ideas[1] = "I want to chase mice";
    ideas[2] = "I want to sleep all day";
    ideas[3] = "I want to climb trees";
    ideas[4] = "I want to nap in the sun";
    ideas[5] = "I want to explore the garden";
    ideas[6] = "I want to play with yarn";
    ideas[7] = "I want to scratch the couch";
    ideas[8] = "I want to watch birds outside";
    ideas[9] = "I want to hide in a box";
    ideas[10] = "I want to drink milk";
    ideas[11] = "I want to purr loudly";
    ideas[12] = "I want to sit on the keyboard";
    ideas[13] = "I want to chase shadows";
    ideas[14] = "I want to dig in the plants";
    ideas[15] = "I want to meow for attention";
    ideas[16] = "I want to rub against your leg";
    ideas[17] = "I want to climb on shelves";
    ideas[18] = "I want to nap on the bed";
    ideas[19] = "I want to chase my tail";
    ideas[20] = "I want to lick your hand";
    ideas[21] = "I want to explore the attic";
    ideas[22] = "I want to sit on the windowsill";
    ideas[23] = "I want to chase bugs";
    ideas[24] = "I want to knock things over";
    ideas[25] = "I want to hide under the blanket"; 
    ideas[26] = "I want to chase the laser pointer";
    ideas[27] = "I want to sleep in a box";
    ideas[28] = "I want to nap in a sunny spot";
    ideas[29] = "I want to climb on the couch";
    ideas[30] = "I want to watch the fish tank";
    ideas[31] = "I want to sniff everything";
    ideas[32] = "I want to jump on the table";
    ideas[33] = "I want to chase shadows on the wall";
    ideas[34] = "I want to knead the blanket";
    ideas[35] = "I want to lick the floor";
    ideas[36] = "I want to chase the dog";
    ideas[37] = "I want to curl up in a bag";
    ideas[38] = "I want to play hide and seek";
    ideas[39] = "I want to scratch the post";
    ideas[40] = "I want to nap on the lap";
    ideas[41] = "I want to chase falling leaves";
    ideas[42] = "I want to drink from the faucet";
    ideas[43] = "I want to play with feathers";
    ideas[44] = "I want to hide in the closet";
    ideas[45] = "I want to jump from shelf to shelf";
    ideas[46] = "I want to sleep in the laundry basket";
    ideas[47] = "I want to watch outside through the window";
    ideas[48] = "I want to chase the shadow of my paw";
    ideas[49] = "I want to sniff new things";
    ideas[50] = "I want to climb the curtains";
    ideas[51] = "I want to nap on the warm laptop";
    ideas[52] = "I want to chase the blinking light";
    ideas[53] = "I want to hide under the table";
    ideas[54] = "I want to scratch the door";
    ideas[55] = "I want to sleep on the pile of clothes";
    ideas[56] = "I want to jump in the boxes";
    ideas[57] = "I want to chase the broom";
    ideas[58] = "I want to curl up on the chair";
    ideas[59] = "I want to bat at strings";
    ideas[60] = "I want to knock over cups";
    ideas[61] = "I want to watch birds in the garden";
    ideas[62] = "I want to nap on the windowsill";
    ideas[63] = "I want to chase the shadow on the floor";
    ideas[64] = "I want to lick your face";
    ideas[65] = "I want to play with paper balls";
    ideas[66] = "I want to hide under the bed";
    ideas[67] = "I want to climb on the bookshelf";
    ideas[68] = "I want to sleep on the couch";
    ideas[69] = "I want to chase bugs on the floor";
    ideas[70] = "I want to curl up on your pillow";
    ideas[71] = "I want to pounce on toys";
    ideas[72] = "I want to scratch the carpet";
    ideas[73] = "I want to nap on the sunlit floor";
    ideas[74] = "I want to chase the dog tail";
    ideas[75] = "I want to lick the window";
    ideas[76] = "I want to climb on the fridge";
    ideas[77] = "I want to hide in paper bags";
    ideas[78] = "I want to watch fish swim";
    ideas[79] = "I want to jump on the bed";
    ideas[80] = "I want to chase shadows outside";
    ideas[81] = "I want to scratch the walls";
    ideas[82] = "I want to nap on your backpack";
    ideas[83] = "I want to chase the curtains";
    ideas[84] = "I want to sit on your books";
    ideas[85] = "I want to lick the spoon";
    ideas[86] = "I want to climb on the chair";
    ideas[87] = "I want to hide under the couch";
    ideas[88] = "I want to pounce on string";
    ideas[89] = "I want to nap on the table";
    ideas[90] = "I want to chase my own shadow";
    ideas[91] = "I want to lick the wall";
    ideas[92] = "I want to sleep in the basket";
    ideas[93] = "I want to chase the flashlight beam";
    ideas[94] = "I want to curl up in a corner";
    ideas[95] = "I want to knock over pens";
    ideas[96] = "I want to chase the falling leaves";
    ideas[97] = "I want to sleep on your lap";
    ideas[98] = "I want to bat at the hanging decorations";
    ideas[99] = "I want to explore every corner of the house";
}

Brain::Brain(Brain const &input)
{
    std::cout << "Brain Copy constructor called" << std::endl;
    *this = input;
}

Brain & Brain::operator=(Brain const &input)
{
    std::cout << "Brain Copy assignment operator called" << std::endl;
    if (this != &input)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = input.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}
