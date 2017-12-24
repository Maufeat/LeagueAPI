#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolSuggestedPlayersSuggestedPlayersConfig { 
    uint32_t PreviousPremadesLimit;
    bool FriendsOfFriendsEnabled;
    uint32_t MaxNumReplacements;
    uint32_t FriendsOfFriendsLimit;
    bool Enabled;
    uint32_t OnlineFriendsLimit;
    uint32_t MaxNumSuggestedPlayers;
    uint32_t VicoriousComradesLimit; 
  };
  inline void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersConfig& v) {
    j["PreviousPremadesLimit"] = v.PreviousPremadesLimit; 
    j["FriendsOfFriendsEnabled"] = v.FriendsOfFriendsEnabled; 
    j["MaxNumReplacements"] = v.MaxNumReplacements; 
    j["FriendsOfFriendsLimit"] = v.FriendsOfFriendsLimit; 
    j["Enabled"] = v.Enabled; 
    j["OnlineFriendsLimit"] = v.OnlineFriendsLimit; 
    j["MaxNumSuggestedPlayers"] = v.MaxNumSuggestedPlayers; 
    j["VicoriousComradesLimit"] = v.VicoriousComradesLimit; 
  }
  inline void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersConfig& v) {
    v.PreviousPremadesLimit = j.at("PreviousPremadesLimit").get<uint32_t>(); 
    v.FriendsOfFriendsEnabled = j.at("FriendsOfFriendsEnabled").get<bool>(); 
    v.MaxNumReplacements = j.at("MaxNumReplacements").get<uint32_t>(); 
    v.FriendsOfFriendsLimit = j.at("FriendsOfFriendsLimit").get<uint32_t>(); 
    v.Enabled = j.at("Enabled").get<bool>(); 
    v.OnlineFriendsLimit = j.at("OnlineFriendsLimit").get<uint32_t>(); 
    v.MaxNumSuggestedPlayers = j.at("MaxNumSuggestedPlayers").get<uint32_t>(); 
    v.VicoriousComradesLimit = j.at("VicoriousComradesLimit").get<uint32_t>(); 
  }
}