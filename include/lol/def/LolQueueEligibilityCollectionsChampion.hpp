#pragma once
#include "../base_def.hpp" 
#include "LolQueueEligibilityCollectionsOwnership.hpp"
namespace lol {
  struct LolQueueEligibilityCollectionsChampion { 
    bool freeToPlay;
    LolQueueEligibilityCollectionsOwnership ownership;
    uint64_t purchased;
    std::vector<std::string> disabledQueues;
    bool rankedPlayEnabled; 
  };
  inline void to_json(json& j, const LolQueueEligibilityCollectionsChampion& v) {
    j["freeToPlay"] = v.freeToPlay; 
    j["ownership"] = v.ownership; 
    j["purchased"] = v.purchased; 
    j["disabledQueues"] = v.disabledQueues; 
    j["rankedPlayEnabled"] = v.rankedPlayEnabled; 
  }
  inline void from_json(const json& j, LolQueueEligibilityCollectionsChampion& v) {
    v.freeToPlay = j.at("freeToPlay").get<bool>(); 
    v.ownership = j.at("ownership").get<LolQueueEligibilityCollectionsOwnership>(); 
    v.purchased = j.at("purchased").get<uint64_t>(); 
    v.disabledQueues = j.at("disabledQueues").get<std::vector<std::string>>(); 
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>(); 
  }
}