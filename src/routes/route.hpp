//
// Created by kelvium on 27.02.2021.
//

#pragma once

#include <cpprest/http_listener.h>

namespace App::routes {
    struct Route {
        utility::string_t url;
        std::function<void(const web::http::http_request& request)> handler;
        web::http::method method;
    };
}
