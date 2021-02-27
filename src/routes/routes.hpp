//
// Created by kelvium on 27.02.2021.
//

#pragma once

#include <vector>
#include "route.hpp"
#include "index.hpp"

namespace App::routes {
    // To add your routes you need to insert them here!
    const std::vector<Route> routes = {
            {"/", indexRoute, web::http::methods::GET}
    };
}
