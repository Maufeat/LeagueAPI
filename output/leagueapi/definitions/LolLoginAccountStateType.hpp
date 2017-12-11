#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLoginAccountStateType { /**/ 
    CREATING_e = 1, /**/ 
    ENABLED_e = 2, /**/ 
    GENERATING_e = 6, /**/ 
    TRANSFERRED_OUT_e = 5, /**/ 
    TRANSFERRING_IN_e = 4, /**/ 
    TRANSFERRING_OUT_e = 3, /**/ 
  };
  static void to_json(json& j, const LolLoginAccountStateType& v) {
    switch(v) { 
    case LolLoginAccountStateType::CREATING_e:
      j = "CREATING";
    break;
    case LolLoginAccountStateType::ENABLED_e:
      j = "ENABLED";
    break;
    case LolLoginAccountStateType::GENERATING_e:
      j = "GENERATING";
    break;
    case LolLoginAccountStateType::TRANSFERRED_OUT_e:
      j = "TRANSFERRED_OUT";
    break;
    case LolLoginAccountStateType::TRANSFERRING_IN_e:
      j = "TRANSFERRING_IN";
    break;
    case LolLoginAccountStateType::TRANSFERRING_OUT_e:
      j = "TRANSFERRING_OUT";
    break;
    };
  }
  static void from_json(const json& j, LolLoginAccountStateType& v) {
    auto s = j.get<std::string>(); 
    if(s == "CREATING") {
      v = LolLoginAccountStateType::CREATING_e;
      return;
    } 
    if(s == "ENABLED") {
      v = LolLoginAccountStateType::ENABLED_e;
      return;
    } 
    if(s == "GENERATING") {
      v = LolLoginAccountStateType::GENERATING_e;
      return;
    } 
    if(s == "TRANSFERRED_OUT") {
      v = LolLoginAccountStateType::TRANSFERRED_OUT_e;
      return;
    } 
    if(s == "TRANSFERRING_IN") {
      v = LolLoginAccountStateType::TRANSFERRING_IN_e;
      return;
    } 
    if(s == "TRANSFERRING_OUT") {
      v = LolLoginAccountStateType::TRANSFERRING_OUT_e;
      return;
    } 
  }
} 