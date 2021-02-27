//
// Created by kelvium on 27.02.2021.
//

#pragma once

#include <cpprest/http_listener.h>

namespace App::handlers {
    void postHandler(const web::http::http_request& request);
}
