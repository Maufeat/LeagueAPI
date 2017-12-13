#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChampSelectLegacyQueueGameTypeConfig.hpp>
namespace lol {
  struct LolChampSelectLegacyQueue { 
    bool areFreeChampionsAllowed;
    LolChampSelectLegacyQueueGameTypeConfig gameTypeConfig; 
  };
  void to_json(json& j, const LolChampSelectLegacyQueue& v) {
  j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed; 
  j["gameTypeConfig"] = v.gameTypeConfig; 
  }
  void from_json(const json& j, LolChampSelectLegacyQueue& v) {
  v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>(); 
  v.gameTypeConfig = j.at("gameTypeConfig").get<LolChampSelectLegacyQueueGameTypeConfig>(); 
  }
}