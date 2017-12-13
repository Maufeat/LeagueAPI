#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PostLolLoadoutsV1SendItemsToMegaPacketById(const LeagueClient& _client, const uint32_t& id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-loadouts/v1/sendItemsToMegaPacket/"+to_string(id)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}