#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct ClubPreferences { 
    bool shareClubAffiliation;
    std::string primaryClubKey; 
  };
  void to_json(json& j, const ClubPreferences& v) {
    j["shareClubAffiliation"] = v.shareClubAffiliation; 
    j["primaryClubKey"] = v.primaryClubKey; 
  }
  void from_json(const json& j, ClubPreferences& v) {
    v.shareClubAffiliation = j.at("shareClubAffiliation").get<bool>(); 
    v.primaryClubKey = j.at("primaryClubKey").get<std::string>(); 
  }
}