#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolEndOfGameEndOfGamePlayerComplaintV2 { 
    uint64_t reportedSummonerId;
    uint64_t gameId;
    std::string offenses;
    std::string comment; 
  };
  void to_json(json& j, const LolEndOfGameEndOfGamePlayerComplaintV2& v) {
  j["reportedSummonerId"] = v.reportedSummonerId; 
  j["gameId"] = v.gameId; 
  j["offenses"] = v.offenses; 
  j["comment"] = v.comment; 
  }
  void from_json(const json& j, LolEndOfGameEndOfGamePlayerComplaintV2& v) {
  v.reportedSummonerId = j.at("reportedSummonerId").get<uint64_t>(); 
  v.gameId = j.at("gameId").get<uint64_t>(); 
  v.offenses = j.at("offenses").get<std::string>(); 
  v.comment = j.at("comment").get<std::string>(); 
  }
}