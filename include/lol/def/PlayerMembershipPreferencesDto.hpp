#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PlayerMembershipPreferencesDto { 
    std::string primaryActiveClubKey;
    bool shareClubAffiliation; 
  };
  inline void to_json(json& j, const PlayerMembershipPreferencesDto& v) {
    j["primaryActiveClubKey"] = v.primaryActiveClubKey; 
    j["shareClubAffiliation"] = v.shareClubAffiliation; 
  }
  inline void from_json(const json& j, PlayerMembershipPreferencesDto& v) {
    v.primaryActiveClubKey = j.at("primaryActiveClubKey").get<std::string>(); 
    v.shareClubAffiliation = j.at("shareClubAffiliation").get<bool>(); 
  }
}