//
// Created by kelvium on 27.02.2021.
//

#pragma once

#include <cpprest/http_listener.h>
#include <functional>

namespace App {
    struct MethodHandler {
        web::http::method method;
        std::function<void(web::http::http_request)> handler;
    };
}
