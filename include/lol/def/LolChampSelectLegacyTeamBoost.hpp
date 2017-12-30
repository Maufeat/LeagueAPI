#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChampSelectLegacyTeamBoost { 
    std::string summonerName;
    int64_t price;
    int64_t ipRewardForPurchaser;
    int64_t ipReward;
    std::vector<int64_t> availableSkins;
    bool unlocked;
    std::string skinUnlockMode; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyTeamBoost& v) {
    j["summonerName"] = v.summonerName; 
    j["price"] = v.price; 
    j["ipRewardForPurchaser"] = v.ipRewardForPurchaser; 
    j["ipReward"] = v.ipReward; 
    j["availableSkins"] = v.availableSkins; 
    j["unlocked"] = v.unlocked; 
    j["skinUnlockMode"] = v.skinUnlockMode; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyTeamBoost& v) {
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.price = j.at("price").get<int64_t>(); 
    v.ipRewardForPurchaser = j.at("ipRewardForPurchaser").get<int64_t>(); 
    v.ipReward = j.at("ipReward").get<int64_t>(); 
    v.availableSkins = j.at("availableSkins").get<std::vector<int64_t>>(); 
    v.unlocked = j.at("unlocked").get<bool>(); 
    v.skinUnlockMode = j.at("skinUnlockMode").get<std::string>(); 
  }
}