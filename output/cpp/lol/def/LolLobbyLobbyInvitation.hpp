#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyEligibility.hpp>
#include <lol/def/LolLobbyLobbyInvitationState.hpp>
namespace lol {
  struct LolLobbyLobbyInvitation { 
    std::string toSummonerName;
    uint64_t toSummonerId;
    LolLobbyEligibility eligibility;
    std::string fromSummonerName;
    uint64_t fromSummonerId;
    LolLobbyLobbyInvitationState state;
    std::string errorType;
    std::string timestamp;
    json invitationMetaData;
    std::string id; 
  };
  void to_json(json& j, const LolLobbyLobbyInvitation& v) {
  j["toSummonerName"] = v.toSummonerName; 
  j["toSummonerId"] = v.toSummonerId; 
  j["eligibility"] = v.eligibility; 
  j["fromSummonerName"] = v.fromSummonerName; 
  j["fromSummonerId"] = v.fromSummonerId; 
  j["state"] = v.state; 
  j["errorType"] = v.errorType; 
  j["timestamp"] = v.timestamp; 
  j["invitationMetaData"] = v.invitationMetaData; 
  j["id"] = v.id; 
  }
  void from_json(const json& j, LolLobbyLobbyInvitation& v) {
  v.toSummonerName = j.at("toSummonerName").get<std::string>(); 
  v.toSummonerId = j.at("toSummonerId").get<uint64_t>(); 
  v.eligibility = j.at("eligibility").get<LolLobbyEligibility>(); 
  v.fromSummonerName = j.at("fromSummonerName").get<std::string>(); 
  v.fromSummonerId = j.at("fromSummonerId").get<uint64_t>(); 
  v.state = j.at("state").get<LolLobbyLobbyInvitationState>(); 
  v.errorType = j.at("errorType").get<std::string>(); 
  v.timestamp = j.at("timestamp").get<std::string>(); 
  v.invitationMetaData = j.at("invitationMetaData").get<json>(); 
  v.id = j.at("id").get<std::string>(); 
  }
}