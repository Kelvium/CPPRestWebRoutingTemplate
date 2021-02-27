//
// Created by kelvium on 27.02.2021.
//

#include "index.hpp"

namespace App::routes {
    void indexRoute(const web::http::http_request &request) {
        request.reply(web::http::status_codes::Ok, "Hi! My template works! It's good i think.");
    }
}
