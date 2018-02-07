#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChampSelectTeamBoost { 
    std::string summonerName;
    std::string skinUnlockMode;
    int64_t price;
    int64_t ipReward;
    int64_t ipRewardForPurchaser;
    std::vector<int64_t> availableSkins;
    bool unlocked; 
  };
  inline void to_json(json& j, const LolChampSelectTeamBoost& v) {
    j["summonerName"] = v.summonerName; 
    j["skinUnlockMode"] = v.skinUnlockMode; 
    j["price"] = v.price; 
    j["ipReward"] = v.ipReward; 
    j["ipRewardForPurchaser"] = v.ipRewardForPurchaser; 
    j["availableSkins"] = v.availableSkins; 
    j["unlocked"] = v.unlocked; 
  }
  inline void from_json(const json& j, LolChampSelectTeamBoost& v) {
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.skinUnlockMode = j.at("skinUnlockMode").get<std::string>(); 
    v.price = j.at("price").get<int64_t>(); 
    v.ipReward = j.at("ipReward").get<int64_t>(); 
    v.ipRewardForPurchaser = j.at("ipRewardForPurchaser").get<int64_t>(); 
    v.availableSkins = j.at("availableSkins").get<std::vector<int64_t>>(); 
    v.unlocked = j.at("unlocked").get<bool>(); 
  }
}