#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolChatAuthType {  
    plain_e = 0,
    rsoCreate_e = 1,
    rsoRefresh_e = 2,
  };
  void to_json(json& j, const LolChatAuthType& v) {
    if(v == LolChatAuthType::plain_e) {
      j = "plain";
      return;
    }
    if(v == LolChatAuthType::rsoCreate_e) {
      j = "rsoCreate";
      return;
    }
    if(v == LolChatAuthType::rsoRefresh_e) {
      j = "rsoRefresh";
      return;
    }
  }
  void from_json(const json& j, LolChatAuthType& v) {
    if(j.get<std::string>() == "plain") {
      v = LolChatAuthType::plain_e;
      return;
    } 
    if(j.get<std::string>() == "rsoCreate") {
      v = LolChatAuthType::rsoCreate_e;
      return;
    } 
    if(j.get<std::string>() == "rsoRefresh") {
      v = LolChatAuthType::rsoRefresh_e;
      return;
    } 
  }
}