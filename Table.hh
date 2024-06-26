#pragma once
class Table {
public:
    std::string m_line_menu;
    std::string m_dismiss_line_menu;
    std::string m_dismiss_word_menu;

    std::string m_line_result;
    std::string m_dismiss_line_result;
    std::string m_dismiss_word_result;

    std::string m_line_sugges;
    std::string m_dismiss_line_sugges;
    std::string m_dismiss_word_sugges;

    std::string m_line_data;
    std::string m_dismiss_line_data;
    std::string m_dismiss_word_data;

    std::string m_data_title;
    std::string m_result_title;
    std::string m_result_table_suggestion;

    std::string m_value;
    std::string m_mark;
    std::string m_total;
    std::string m_address;
    std::string m_app;
    std::string m_app_address;

    std::string m_color_title;


    std::string m_color_select;

    std::string m_color_table;


    std::string m_heddin_result;
    std::string m_heddin_result_address;
    std::string m_result_fill;
    int m_result_space;

    std::string m_heddin_sugges_result;
    std::string m_heddin_sugges_address;
    std::string m_sugges_fill;
    int m_sugges_space;

    std::string  m_heddin_data_result;
    std::string  m_heddin_data_address;
    int  m_data_space;
    std::string m_interrogative;
    std::string m_value_result;

    int m_menu_space;
    std::string m_heddin_menu_address;

    std::string m_type_table_operator;
    bool m_center_label;

    std::string m_heddin_table;

    std::string m_confirm_title;
    std::string m_value_confirm_result;
    int m_confirm_space;
    std::string m_line_confirm;
    std::string m_dismiss_word_confirm;
    std::string m_dismiss_line_confirm;
    std::string m_heddin_confirm_result;
    std::string m_heddin_confirm_address;

    std::string m_delete_title;
    int m_delete_space;
    std::string m_line_delete;
    std::string m_dismiss_word_delete;
    std::string m_dismiss_line_delete;
    std::string m_heddin_delete_result;
    std::string m_heddin_delete_address;


    std::string m_display_title;
    int m_display_space;
    std::string m_line_display;
    std::string m_dismiss_word_display;
    std::string m_dismiss_line_display;
    std::string m_heddin_display_result;
    std::string m_heddin_display_address;

    Table() = default;
    NLOHMANN_DEFINE_TYPE_INTRUSIVE(Table,
        m_data_title,
        m_result_title,
        m_result_table_suggestion,

        m_value,
        m_mark,
        m_total,
        m_address,
        m_app,
        m_app_address,


        m_heddin_result,
        m_heddin_result_address,
        m_result_fill,
        m_result_space,

        m_heddin_sugges_result,
        m_heddin_sugges_address,
        m_sugges_fill,
        m_sugges_space,

        m_heddin_data_result,
        m_heddin_data_address,
        m_data_space,
        m_interrogative,
        m_value_result,
        m_menu_space,
        m_heddin_menu_address,
        m_type_table_operator,
        m_center_label,

        m_line_result,
        m_dismiss_line_result,
        m_dismiss_word_result,

        m_line_sugges,
        m_dismiss_line_sugges,
        m_dismiss_word_sugges,

        m_line_data,
        m_dismiss_line_data,
        m_dismiss_word_data,

        m_line_menu,
        m_dismiss_line_menu,
        m_dismiss_word_menu,
        m_heddin_table,

        m_confirm_title,
        m_value_confirm_result,
        m_confirm_space,
        m_line_confirm,
        m_dismiss_word_confirm,
        m_dismiss_line_confirm,
        m_heddin_confirm_result,
        m_heddin_confirm_address,


        m_delete_title,
        m_delete_space,
        m_line_delete,
        m_dismiss_word_delete,
        m_dismiss_line_delete,
        m_heddin_delete_result,
        m_heddin_delete_address,


        m_display_title,
        m_display_space,
        m_line_display,
        m_dismiss_word_display,
        m_dismiss_line_display,
        m_heddin_display_result,
        m_heddin_display_address
    )
};
