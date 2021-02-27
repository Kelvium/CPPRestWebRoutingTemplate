//
// Created by kelvium on 27.02.2021.
//

#include "application.hpp"
#include <string>

namespace App {

    void Application::initialize(const std::string& uri, const std::vector<MethodHandler>& methods) {
        m_Listener = web::http::experimental::listener::http_listener(uri);

        // Add supported methods
        for(const auto& method : methods)
            m_Listener.support(method.method, method.handler);
    }

    [[noreturn]] void Application::listen() {
        m_Listener
            .open()
            .wait();

        while (true);
    }
}
