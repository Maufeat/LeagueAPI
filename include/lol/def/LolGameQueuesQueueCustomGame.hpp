#pragma once
#include "../base_def.hpp" 
#include "LolGameQueuesQueueCustomGameSubcategory.hpp"
#include "LolGameQueuesQueueAvailability.hpp"
#include "LolGameQueuesQueueCustomGameSpectatorPolicy.hpp"
namespace lol {
  struct LolGameQueuesQueueCustomGame { 
    LolGameQueuesQueueAvailability queueAvailability;
    std::vector<LolGameQueuesQueueCustomGameSpectatorPolicy> spectatorPolicies;
    std::vector<LolGameQueuesQueueCustomGameSubcategory> subcategories;
    std::optional<std::vector<std::string>> gameServerRegions;
    uint32_t spectatorSlotLimit; 
  };
  inline void to_json(json& j, const LolGameQueuesQueueCustomGame& v) {
    j["queueAvailability"] = v.queueAvailability; 
    j["spectatorPolicies"] = v.spectatorPolicies; 
    j["subcategories"] = v.subcategories; 
    if(v.gameServerRegions)
      j["gameServerRegions"] = *v.gameServerRegions;
    j["spectatorSlotLimit"] = v.spectatorSlotLimit; 
  }
  inline void from_json(const json& j, LolGameQueuesQueueCustomGame& v) {
    v.queueAvailability = j.at("queueAvailability").get<LolGameQueuesQueueAvailability>(); 
    v.spectatorPolicies = j.at("spectatorPolicies").get<std::vector<LolGameQueuesQueueCustomGameSpectatorPolicy>>(); 
    v.subcategories = j.at("subcategories").get<std::vector<LolGameQueuesQueueCustomGameSubcategory>>(); 
    if(auto it = j.find("gameServerRegions"); it != j.end() && !it->is_null())
      v.gameServerRegions = it->get<std::optional<std::vector<std::string>>>(); 
    v.spectatorSlotLimit = j.at("spectatorSlotLimit").get<uint32_t>(); 
  }
}