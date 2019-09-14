#pragma once

#include "../components/Empty.hpp"
#include "../engine/ecs/include.hpp"

namespace ecs {
    using ECS = GenericECS<
        Empty
    >;

    using World = GenericWorld<ECS>;

    template<typename T, typename... Ts>
    using DataQuery = GenericDataQuery<ECS, T, Ts...>;
}
