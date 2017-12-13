#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/ClubInviteStatus.hpp>
namespace lol {
  struct ClubInvite { 
    uint64_t inviteeAccountId;
    ClubInviteStatus status;
    std::string clubKey;
    std::string clubName;
    uint64_t inviterSummonerId;
    std::string inviterSummonerName;
    uint64_t inviteeSummonerId;
    uint64_t inviterAccountId; 
  };
  void to_json(json& j, const ClubInvite& v) {
  j["inviteeAccountId"] = v.inviteeAccountId; 
  j["status"] = v.status; 
  j["clubKey"] = v.clubKey; 
  j["clubName"] = v.clubName; 
  j["inviterSummonerId"] = v.inviterSummonerId; 
  j["inviterSummonerName"] = v.inviterSummonerName; 
  j["inviteeSummonerId"] = v.inviteeSummonerId; 
  j["inviterAccountId"] = v.inviterAccountId; 
  }
  void from_json(const json& j, ClubInvite& v) {
  v.inviteeAccountId = j.at("inviteeAccountId").get<uint64_t>(); 
  v.status = j.at("status").get<ClubInviteStatus>(); 
  v.clubKey = j.at("clubKey").get<std::string>(); 
  v.clubName = j.at("clubName").get<std::string>(); 
  v.inviterSummonerId = j.at("inviterSummonerId").get<uint64_t>(); 
  v.inviterSummonerName = j.at("inviterSummonerName").get<std::string>(); 
  v.inviteeSummonerId = j.at("inviteeSummonerId").get<uint64_t>(); 
  v.inviterAccountId = j.at("inviterAccountId").get<uint64_t>(); 
  }
}