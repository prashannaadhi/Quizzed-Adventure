#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include <string>

data::data(){
        text1.setFont(font);
        text1.setColor(Color::Black);
        text1.setPosition(150,130);
        text1.setString("Choose The Field: \n"
                        <<"1 for Medical: \n"
                        <<"2 for Sports: \n"
                        <<"3 for General Knowledge: \n"
                        <<"4 for Engineering: \n");

        text2.setFont(font);
        text2.setCharacterSize(30);
        text2.setColor(Color::Black);
        text2.setPosition(125,410);

        text3.setFont(font);
        text3.setColor(Color::Black);
        text3.setPosition(150,130);

        textC.setFont(font);
        textC.setColor(Color::Red);
        textC.setPosition(150,130);
        textC.setString("Congratulation!!Correct answer.");

        textW.setFont(font);
        textW.setColor(Color::Red);
        textW.setPosition(150,130);
        textW.setString("Sorry !! Incorrect answer.");
}
