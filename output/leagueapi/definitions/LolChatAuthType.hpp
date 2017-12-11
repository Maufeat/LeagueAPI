#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolChatAuthType { /**/ 
    plain_e = 0, /**/ 
    rsoCreate_e = 1, /**/ 
    rsoRefresh_e = 2, /**/ 
  };
  static void to_json(json& j, const LolChatAuthType& v) {
    switch(v) { 
    case LolChatAuthType::plain_e:
      j = "plain";
    break;
    case LolChatAuthType::rsoCreate_e:
      j = "rsoCreate";
    break;
    case LolChatAuthType::rsoRefresh_e:
      j = "rsoRefresh";
    break;
    };
  }
  static void from_json(const json& j, LolChatAuthType& v) {
    auto s = j.get<std::string>(); 
    if(s == "plain") {
      v = LolChatAuthType::plain_e;
      return;
    } 
    if(s == "rsoCreate") {
      v = LolChatAuthType::rsoCreate_e;
      return;
    } 
    if(s == "rsoRefresh") {
      v = LolChatAuthType::rsoRefresh_e;
      return;
    } 
  }
} 