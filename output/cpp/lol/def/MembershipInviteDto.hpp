#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct MembershipInviteDto { 
    std::string inviterPlatformId;
    uint64_t inviteeAccountId;
    int32_t status;
    std::string clubKey;
    std::string clubName;
    uint64_t inviterSummonerId;
    uint64_t inviteeSummonerId;
    std::string inviteePlatformId;
    uint64_t inviterAccountId; 
  };
  void to_json(json& j, const MembershipInviteDto& v) {
    j["inviterPlatformId"] = v.inviterPlatformId; 
    j["inviteeAccountId"] = v.inviteeAccountId; 
    j["status"] = v.status; 
    j["clubKey"] = v.clubKey; 
    j["clubName"] = v.clubName; 
    j["inviterSummonerId"] = v.inviterSummonerId; 
    j["inviteeSummonerId"] = v.inviteeSummonerId; 
    j["inviteePlatformId"] = v.inviteePlatformId; 
    j["inviterAccountId"] = v.inviterAccountId; 
  }
  void from_json(const json& j, MembershipInviteDto& v) {
    v.inviterPlatformId = j.at("inviterPlatformId").get<std::string>(); 
    v.inviteeAccountId = j.at("inviteeAccountId").get<uint64_t>(); 
    v.status = j.at("status").get<int32_t>(); 
    v.clubKey = j.at("clubKey").get<std::string>(); 
    v.clubName = j.at("clubName").get<std::string>(); 
    v.inviterSummonerId = j.at("inviterSummonerId").get<uint64_t>(); 
    v.inviteeSummonerId = j.at("inviteeSummonerId").get<uint64_t>(); 
    v.inviteePlatformId = j.at("inviteePlatformId").get<std::string>(); 
    v.inviterAccountId = j.at("inviterAccountId").get<uint64_t>(); 
  }
}