#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolQueueEligibilityCollectionsOwnership.hpp>
namespace lol {
  struct LolQueueEligibilityCollectionsChampion { 
    LolQueueEligibilityCollectionsOwnership ownership;
    bool freeToPlay;
    uint64_t purchased;
    bool rankedPlayEnabled;
    std::vector<std::string> disabledQueues; 
  };
  void to_json(json& j, const LolQueueEligibilityCollectionsChampion& v) {
  j["ownership"] = v.ownership; 
  j["freeToPlay"] = v.freeToPlay; 
  j["purchased"] = v.purchased; 
  j["rankedPlayEnabled"] = v.rankedPlayEnabled; 
  j["disabledQueues"] = v.disabledQueues; 
  }
  void from_json(const json& j, LolQueueEligibilityCollectionsChampion& v) {
  v.ownership = j.at("ownership").get<LolQueueEligibilityCollectionsOwnership>(); 
  v.freeToPlay = j.at("freeToPlay").get<bool>(); 
  v.purchased = j.at("purchased").get<uint64_t>(); 
  v.rankedPlayEnabled = j.at("rankedPlayEnabled").get<bool>(); 
  v.disabledQueues = j.at("disabledQueues").get<std::vector<std::string>>(); 
  }
}