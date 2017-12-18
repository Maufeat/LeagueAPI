#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PlayerMembershipPreferencesDto { 
    bool shareClubAffiliation;
    std::string primaryActiveClubKey; 
  };
  inline void to_json(json& j, const PlayerMembershipPreferencesDto& v) {
    j["shareClubAffiliation"] = v.shareClubAffiliation; 
    j["primaryActiveClubKey"] = v.primaryActiveClubKey; 
  }
  inline void from_json(const json& j, PlayerMembershipPreferencesDto& v) {
    v.shareClubAffiliation = j.at("shareClubAffiliation").get<bool>(); 
    v.primaryActiveClubKey = j.at("primaryActiveClubKey").get<std::string>(); 
  }
}