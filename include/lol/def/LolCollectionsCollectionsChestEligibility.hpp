#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolCollectionsCollectionsChestEligibility { 
    uint64_t nextChestRechargeTime;
    uint32_t maximumChests;
    uint32_t earnableChests; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsChestEligibility& v) {
    j["nextChestRechargeTime"] = v.nextChestRechargeTime; 
    j["maximumChests"] = v.maximumChests; 
    j["earnableChests"] = v.earnableChests; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsChestEligibility& v) {
    v.nextChestRechargeTime = j.at("nextChestRechargeTime").get<uint64_t>(); 
    v.maximumChests = j.at("maximumChests").get<uint32_t>(); 
    v.earnableChests = j.at("earnableChests").get<uint32_t>(); 
  }
}