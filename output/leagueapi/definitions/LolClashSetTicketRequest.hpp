#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolClashSetTicketRequest { /**/ 
    int32_t ticketAmount;/**/
  };
  static void to_json(json& j, const LolClashSetTicketRequest& v) { 
    j["ticketAmount"] = v.ticketAmount;
  }
  static void from_json(const json& j, LolClashSetTicketRequest& v) { 
    v.ticketAmount = j.at("ticketAmount").get<int32_t>(); 
  }
} 