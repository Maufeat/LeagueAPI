#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct ClubReferenceDto { 
    std::string clubKey;
    std::string clubName; 
  };
  void to_json(json& j, const ClubReferenceDto& v) {
  j["clubKey"] = v.clubKey; 
  j["clubName"] = v.clubName; 
  }
  void from_json(const json& j, ClubReferenceDto& v) {
  v.clubKey = j.at("clubKey").get<std::string>(); 
  v.clubName = j.at("clubName").get<std::string>(); 
  }
}