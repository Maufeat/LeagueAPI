#pragma once
#include "../base_def.hpp" 
#include "LolGameQueuesQueueCustomGameSubcategory.hpp"
#include "LolGameQueuesQueueAvailability.hpp"
#include "LolGameQueuesQueueCustomGameSpectatorPolicy.hpp"
namespace lol {
  struct LolGameQueuesQueueCustomGame { 
    std::vector<LolGameQueuesQueueCustomGameSubcategory> subcategories;
    LolGameQueuesQueueAvailability queueAvailability;
    std::vector<LolGameQueuesQueueCustomGameSpectatorPolicy> spectatorPolicies;
    uint32_t spectatorSlotLimit;
    std::optional<std::vector<std::string>> gameServerRegions; 
  };
  inline void to_json(json& j, const LolGameQueuesQueueCustomGame& v) {
    j["subcategories"] = v.subcategories; 
    j["queueAvailability"] = v.queueAvailability; 
    j["spectatorPolicies"] = v.spectatorPolicies; 
    j["spectatorSlotLimit"] = v.spectatorSlotLimit; 
    if(v.gameServerRegions)
      j["gameServerRegions"] = *v.gameServerRegions;
  }
  inline void from_json(const json& j, LolGameQueuesQueueCustomGame& v) {
    v.subcategories = j.at("subcategories").get<std::vector<LolGameQueuesQueueCustomGameSubcategory>>(); 
    v.queueAvailability = j.at("queueAvailability").get<LolGameQueuesQueueAvailability>(); 
    v.spectatorPolicies = j.at("spectatorPolicies").get<std::vector<LolGameQueuesQueueCustomGameSpectatorPolicy>>(); 
    v.spectatorSlotLimit = j.at("spectatorSlotLimit").get<uint32_t>(); 
    if(auto it = j.find("gameServerRegions"); it != j.end() && !it->is_null())
      v.gameServerRegions = it->get<std::optional<std::vector<std::string>>>(); 
  }
}