#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolQueueEligibilityCollectionsOwnership.hpp>
namespace lol {
  struct LolQueueEligibilityCollectionsChampion { 
    LolQueueEligibilityCollectionsOwnership ownership;
    bool freeToPlay;
    std::vector<std::string> disabledQueues;
    uint64_t purchased;
    bool rankedPlayEnabled; 
  };
  void to_json(json& j, const LolQueueEligibilityCollectionsChampion& v) {
  j["ownership"] = v.ownership; 
  j["freeToPlay"] = v.freeToPlay; 
  j["disabledQueues"] = v.disabledQueues; 
  j["purchased"] = v.purchased; 
  j["rankedPlayEnabled"] = v.rankedPlayEnabled; 
  }
  void from_json(const json& j, LolQueueEligibilityCollectionsChampion& v) {
  v.ownership = j.at("ownership").get<LolQueueEligibilityCollectionsOwnership>(); 
  v.freeToPlay = j.at("freeToPlay").get<bool>(); 
  v.disabledQueues = j.at("disabledQueues").get<std::vector<std::string>>(); 
  v.purchased = j.at("purchased").get<uint64_t>(); 
  v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>(); 
  }
}