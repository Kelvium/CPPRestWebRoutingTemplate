//
// Created by kelvium on 27.02.2021.
//

#include "get.hpp"
#include "../routes/routes.hpp"

namespace App::handlers {
    void postHandler(const web::http::http_request& request) {
        for(const auto& route : routes::routes) {
            if(route.url == request.request_uri() && request.method() == web::http::methods::POST)
                route.handler(request);
            else
                request.reply(web::http::status_codes::NotFound, "404 - Not Found");
        }
    }
}
