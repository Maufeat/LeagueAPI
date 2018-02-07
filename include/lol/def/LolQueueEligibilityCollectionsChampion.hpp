#pragma once
#include "../base_def.hpp" 
#include "LolQueueEligibilityCollectionsOwnership.hpp"
namespace lol {
  struct LolQueueEligibilityCollectionsChampion { 
    std::vector<std::string> disabledQueues;
    bool freeToPlay;
    LolQueueEligibilityCollectionsOwnership ownership;
    uint64_t purchased;
    bool rankedPlayEnabled; 
  };
  inline void to_json(json& j, const LolQueueEligibilityCollectionsChampion& v) {
    j["disabledQueues"] = v.disabledQueues; 
    j["freeToPlay"] = v.freeToPlay; 
    j["ownership"] = v.ownership; 
    j["purchased"] = v.purchased; 
    j["rankedPlayEnabled"] = v.rankedPlayEnabled; 
  }
  inline void from_json(const json& j, LolQueueEligibilityCollectionsChampion& v) {
    v.disabledQueues = j.at("disabledQueues").get<std::vector<std::string>>(); 
    v.freeToPlay = j.at("freeToPlay").get<bool>(); 
    v.ownership = j.at("ownership").get<LolQueueEligibilityCollectionsOwnership>(); 
    v.purchased = j.at("purchased").get<uint64_t>(); 
    v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>(); 
  }
}