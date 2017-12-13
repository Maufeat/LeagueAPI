#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct BaseMembershipInviteDto { 
    std::string clubKey;
    uint64_t inviterSummonerId;
    std::string inviteePlatformId;
    std::string inviterPlatformId;
    uint64_t inviterAccountId;
    uint64_t inviteeSummonerId;
    int32_t status;
    std::string clubName; 
  };
  void to_json(json& j, const BaseMembershipInviteDto& v) {
  j["clubKey"] = v.clubKey; 
  j["inviterSummonerId"] = v.inviterSummonerId; 
  j["inviteePlatformId"] = v.inviteePlatformId; 
  j["inviterPlatformId"] = v.inviterPlatformId; 
  j["inviterAccountId"] = v.inviterAccountId; 
  j["inviteeSummonerId"] = v.inviteeSummonerId; 
  j["status"] = v.status; 
  j["clubName"] = v.clubName; 
  }
  void from_json(const json& j, BaseMembershipInviteDto& v) {
  v.clubKey = j.at("clubKey").get<std::string>(); 
  v.inviterSummonerId = j.at("inviterSummonerId").get<uint64_t>(); 
  v.inviteePlatformId = j.at("inviteePlatformId").get<std::string>(); 
  v.inviterPlatformId = j.at("inviterPlatformId").get<std::string>(); 
  v.inviterAccountId = j.at("inviterAccountId").get<uint64_t>(); 
  v.inviteeSummonerId = j.at("inviteeSummonerId").get<uint64_t>(); 
  v.status = j.at("status").get<int32_t>(); 
  v.clubName = j.at("clubName").get<std::string>(); 
  }
}