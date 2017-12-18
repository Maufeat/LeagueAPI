#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolClashSetTicketRequest { 
    int32_t ticketAmount; 
  };
  inline void to_json(json& j, const LolClashSetTicketRequest& v) {
    j["ticketAmount"] = v.ticketAmount; 
  }
  inline void from_json(const json& j, LolClashSetTicketRequest& v) {
    v.ticketAmount = j.at("ticketAmount").get<int32_t>(); 
  }
}