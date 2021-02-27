//
// Created by kelvium on 27.02.2021.
//

#pragma once

#include <cpprest/http_listener.h>
#include <vector>
#include "methodhandler.hpp"

namespace App {
    class Application {
    public:
        void initialize(const std::string& uri, const std::vector<MethodHandler>& methods);

        [[noreturn]] void listen();

    private:
        web::http::experimental::listener::http_listener m_Listener;
    };
}
