#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct ClubPreferences { 
    bool shareClubAffiliation;
    std::string primaryClubKey; 
  };
  inline void to_json(json& j, const ClubPreferences& v) {
    j["shareClubAffiliation"] = v.shareClubAffiliation; 
    j["primaryClubKey"] = v.primaryClubKey; 
  }
  inline void from_json(const json& j, ClubPreferences& v) {
    v.shareClubAffiliation = j.at("shareClubAffiliation").get<bool>(); 
    v.primaryClubKey = j.at("primaryClubKey").get<std::string>(); 
  }
}