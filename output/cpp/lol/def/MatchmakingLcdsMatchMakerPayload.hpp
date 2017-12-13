#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct MatchmakingLcdsMatchMakerPayload { 
    std::string LEAVER_BUSTER_ACCESS_TOKEN; 
  };
  void to_json(json& j, const MatchmakingLcdsMatchMakerPayload& v) {
    j["LEAVER_BUSTER_ACCESS_TOKEN"] = v.LEAVER_BUSTER_ACCESS_TOKEN; 
  }
  void from_json(const json& j, MatchmakingLcdsMatchMakerPayload& v) {
    v.LEAVER_BUSTER_ACCESS_TOKEN = j.at("LEAVER_BUSTER_ACCESS_TOKEN").get<std::string>(); 
  }
}