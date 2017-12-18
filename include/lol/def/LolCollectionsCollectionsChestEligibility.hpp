#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolCollectionsCollectionsChestEligibility { 
    uint32_t earnableChests;
    uint32_t maximumChests;
    uint64_t nextChestRechargeTime; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsChestEligibility& v) {
    j["earnableChests"] = v.earnableChests; 
    j["maximumChests"] = v.maximumChests; 
    j["nextChestRechargeTime"] = v.nextChestRechargeTime; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsChestEligibility& v) {
    v.earnableChests = j.at("earnableChests").get<uint32_t>(); 
    v.maximumChests = j.at("maximumChests").get<uint32_t>(); 
    v.nextChestRechargeTime = j.at("nextChestRechargeTime").get<uint64_t>(); 
  }
}