#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderTeamBoost { 
    std::string skinUnlockMode;
    int64_t price;
    int64_t ipRewardForPurchaser;
    std::vector<int64_t> availableSkins;
    bool unlocked;
    std::string summonerName;
    int64_t ipReward; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderTeamBoost& v) {
    j["skinUnlockMode"] = v.skinUnlockMode; 
    j["price"] = v.price; 
    j["ipRewardForPurchaser"] = v.ipRewardForPurchaser; 
    j["availableSkins"] = v.availableSkins; 
    j["unlocked"] = v.unlocked; 
    j["summonerName"] = v.summonerName; 
    j["ipReward"] = v.ipReward; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderTeamBoost& v) {
    v.skinUnlockMode = j.at("skinUnlockMode").get<std::string>(); 
    v.price = j.at("price").get<int64_t>(); 
    v.ipRewardForPurchaser = j.at("ipRewardForPurchaser").get<int64_t>(); 
    v.availableSkins = j.at("availableSkins").get<std::vector<int64_t>>(); 
    v.unlocked = j.at("unlocked").get<bool>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.ipReward = j.at("ipReward").get<int64_t>(); 
  }
}