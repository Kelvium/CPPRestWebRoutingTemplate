//
// Created by kelvium on 27.02.2021.
//

#include "application.hpp"
#include "handlers/get.hpp" // we use only get handler. you may use other handlers
#include <iostream>

int main() {
    std::vector<App::MethodHandler> handlers = {
            {web::http::methods::GET, App::handlers::getHandler}
    };
    App::Application app;
    app.initialize("http://127.0.0.1/", handlers);
    try {
        app.listen();
    } catch (const std::exception &exception) {
        std::cerr << exception.what() << std::endl;
    }
}
