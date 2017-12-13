#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyTeamBuilderTeamBoost { 
    int64_t price;
    std::vector<int64_t> availableSkins;
    std::string summonerName;
    bool unlocked;
    int64_t ipReward;
    std::string skinUnlockMode;
    int64_t ipRewardForPurchaser; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderTeamBoost& v) {
  j["price"] = v.price; 
  j["availableSkins"] = v.availableSkins; 
  j["summonerName"] = v.summonerName; 
  j["unlocked"] = v.unlocked; 
  j["ipReward"] = v.ipReward; 
  j["skinUnlockMode"] = v.skinUnlockMode; 
  j["ipRewardForPurchaser"] = v.ipRewardForPurchaser; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderTeamBoost& v) {
  v.price = j.at("price").get<int64_t>(); 
  v.availableSkins = j.at("availableSkins").get<std::vector<int64_t>>(); 
  v.summonerName = j.at("summonerName").get<std::string>(); 
  v.unlocked = j.at("unlocked").get<bool>(); 
  v.ipReward = j.at("ipReward").get<int64_t>(); 
  v.skinUnlockMode = j.at("skinUnlockMode").get<std::string>(); 
  v.ipRewardForPurchaser = j.at("ipRewardForPurchaser").get<int64_t>(); 
  }
}