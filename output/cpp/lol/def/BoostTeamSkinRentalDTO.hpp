#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct BoostTeamSkinRentalDTO { 
    int64_t price;
    std::vector<int64_t> availableSkins;
    std::string summonerName;
    std::string skinUnlockMode;
    bool unlocked;
    int64_t ipRewardForPurchaser;
    int64_t ipReward; 
  };
  inline void to_json(json& j, const BoostTeamSkinRentalDTO& v) {
    j["price"] = v.price; 
    j["availableSkins"] = v.availableSkins; 
    j["summonerName"] = v.summonerName; 
    j["skinUnlockMode"] = v.skinUnlockMode; 
    j["unlocked"] = v.unlocked; 
    j["ipRewardForPurchaser"] = v.ipRewardForPurchaser; 
    j["ipReward"] = v.ipReward; 
  }
  inline void from_json(const json& j, BoostTeamSkinRentalDTO& v) {
    v.price = j.at("price").get<int64_t>(); 
    v.availableSkins = j.at("availableSkins").get<std::vector<int64_t>>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.skinUnlockMode = j.at("skinUnlockMode").get<std::string>(); 
    v.unlocked = j.at("unlocked").get<bool>(); 
    v.ipRewardForPurchaser = j.at("ipRewardForPurchaser").get<int64_t>(); 
    v.ipReward = j.at("ipReward").get<int64_t>(); 
  }
}