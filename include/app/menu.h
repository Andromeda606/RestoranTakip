//
// Created by ramoi on 17.12.2022.
//

#ifndef LIBRARYTEST_MENU_H
#define LIBRARYTEST_MENU_H
struct Food;
struct Card;
struct Category;

static void draw_menu(struct Food *foods, struct Card *card, int line, int card_length, int el, int desk_id, struct Category *categories);

#endif //LIBRARYTEST_MENU_H
