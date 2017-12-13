#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct ClubMOTD { 
    std::string motd; 
  };
  void to_json(json& j, const ClubMOTD& v) {
    j["motd"] = v.motd; 
  }
  void from_json(const json& j, ClubMOTD& v) {
    v.motd = j.at("motd").get<std::string>(); 
  }
}