#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyEligibility.hpp>
#include <lol/def/LolLobbyLobbyInvitationState.hpp>
namespace lol {
  struct LolLobbyLobbyInvitation { 
    std::string errorType;
    LolLobbyLobbyInvitationState state;
    LolLobbyEligibility eligibility;
    std::string id;
    uint64_t toSummonerId;
    std::string toSummonerName;
    std::string fromSummonerName;
    std::string timestamp;
    json invitationMetaData;
    uint64_t fromSummonerId; 
  };
  void to_json(json& j, const LolLobbyLobbyInvitation& v) {
  j["errorType"] = v.errorType; 
  j["state"] = v.state; 
  j["eligibility"] = v.eligibility; 
  j["id"] = v.id; 
  j["toSummonerId"] = v.toSummonerId; 
  j["toSummonerName"] = v.toSummonerName; 
  j["fromSummonerName"] = v.fromSummonerName; 
  j["timestamp"] = v.timestamp; 
  j["invitationMetaData"] = v.invitationMetaData; 
  j["fromSummonerId"] = v.fromSummonerId; 
  }
  void from_json(const json& j, LolLobbyLobbyInvitation& v) {
  v.errorType = j.at("errorType").get<std::string>(); 
  v.state = j.at("state").get<LolLobbyLobbyInvitationState>(); 
  v.eligibility = j.at("eligibility").get<LolLobbyEligibility>(); 
  v.id = j.at("id").get<std::string>(); 
  v.toSummonerId = j.at("toSummonerId").get<uint64_t>(); 
  v.toSummonerName = j.at("toSummonerName").get<std::string>(); 
  v.fromSummonerName = j.at("fromSummonerName").get<std::string>(); 
  v.timestamp = j.at("timestamp").get<std::string>(); 
  v.invitationMetaData = j.at("invitationMetaData").get<json>(); 
  v.fromSummonerId = j.at("fromSummonerId").get<uint64_t>(); 
  }
}