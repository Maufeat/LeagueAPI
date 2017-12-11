#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolGameQueuesQueueCustomGameSpectatorPolicy.hpp>
#include <leagueapi/definitions/LolGameQueuesQueueAvailability.hpp>
#include <leagueapi/definitions/LolGameQueuesQueueCustomGameSubcategory.hpp>

namespace leagueapi {
  struct LolGameQueuesQueueCustomGame { /**/ 
    std::vector<LolGameQueuesQueueCustomGameSpectatorPolicy> spectatorPolicies;/**/
    LolGameQueuesQueueAvailability queueAvailability;/**/
    std::vector<LolGameQueuesQueueCustomGameSubcategory> subcategories;/**/
    std::optional<std::vector<std::string>> gameServerRegions;/**/
    uint32_t spectatorSlotLimit;/**/
  };
  static void to_json(json& j, const LolGameQueuesQueueCustomGame& v) { 
    j["spectatorPolicies"] = v.spectatorPolicies;
    j["queueAvailability"] = v.queueAvailability;
    j["subcategories"] = v.subcategories;
    j["gameServerRegions"] = v.gameServerRegions;
    j["spectatorSlotLimit"] = v.spectatorSlotLimit;
  }
  static void from_json(const json& j, LolGameQueuesQueueCustomGame& v) { 
    v.spectatorPolicies = j.at("spectatorPolicies").get<std::vector<LolGameQueuesQueueCustomGameSpectatorPolicy>>(); 
    v.queueAvailability = j.at("queueAvailability").get<LolGameQueuesQueueAvailability>(); 
    v.subcategories = j.at("subcategories").get<std::vector<LolGameQueuesQueueCustomGameSubcategory>>(); 
    v.gameServerRegions = j.at("gameServerRegions").get<std::optional<std::vector<std::string>>>(); 
    v.spectatorSlotLimit = j.at("spectatorSlotLimit").get<uint32_t>(); 
  }
} 