#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolLoginAccountStateType {  
    CREATING_e = 1,
    ENABLED_e = 2,
    GENERATING_e = 6,
    TRANSFERRED_OUT_e = 5,
    TRANSFERRING_IN_e = 4,
    TRANSFERRING_OUT_e = 3,
  };
  inline void to_json(json& j, const LolLoginAccountStateType& v) {
    if(v == LolLoginAccountStateType::CREATING_e) {
      j = "CREATING";
      return;
    }
    if(v == LolLoginAccountStateType::ENABLED_e) {
      j = "ENABLED";
      return;
    }
    if(v == LolLoginAccountStateType::GENERATING_e) {
      j = "GENERATING";
      return;
    }
    if(v == LolLoginAccountStateType::TRANSFERRED_OUT_e) {
      j = "TRANSFERRED_OUT";
      return;
    }
    if(v == LolLoginAccountStateType::TRANSFERRING_IN_e) {
      j = "TRANSFERRING_IN";
      return;
    }
    if(v == LolLoginAccountStateType::TRANSFERRING_OUT_e) {
      j = "TRANSFERRING_OUT";
      return;
    }
  }
  inline void from_json(const json& j, LolLoginAccountStateType& v) {
    if(j.get<std::string>() == "CREATING") {
      v = LolLoginAccountStateType::CREATING_e;
      return;
    } 
    if(j.get<std::string>() == "ENABLED") {
      v = LolLoginAccountStateType::ENABLED_e;
      return;
    } 
    if(j.get<std::string>() == "GENERATING") {
      v = LolLoginAccountStateType::GENERATING_e;
      return;
    } 
    if(j.get<std::string>() == "TRANSFERRED_OUT") {
      v = LolLoginAccountStateType::TRANSFERRED_OUT_e;
      return;
    } 
    if(j.get<std::string>() == "TRANSFERRING_IN") {
      v = LolLoginAccountStateType::TRANSFERRING_IN_e;
      return;
    } 
    if(j.get<std::string>() == "TRANSFERRING_OUT") {
      v = LolLoginAccountStateType::TRANSFERRING_OUT_e;
      return;
    } 
  }
}