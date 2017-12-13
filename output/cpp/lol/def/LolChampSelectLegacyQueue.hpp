#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChampSelectLegacyQueueGameTypeConfig.hpp>
namespace lol {
  struct LolChampSelectLegacyQueue { 
    LolChampSelectLegacyQueueGameTypeConfig gameTypeConfig;
    bool areFreeChampionsAllowed; 
  };
  void to_json(json& j, const LolChampSelectLegacyQueue& v) {
  j["gameTypeConfig"] = v.gameTypeConfig; 
  j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed; 
  }
  void from_json(const json& j, LolChampSelectLegacyQueue& v) {
  v.gameTypeConfig = j.at("gameTypeConfig").get<LolChampSelectLegacyQueueGameTypeConfig>(); 
  v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>(); 
  }
}