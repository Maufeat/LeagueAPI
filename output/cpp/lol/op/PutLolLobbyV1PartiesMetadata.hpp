#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyPartyMemberMetadataDto.hpp>
namespace lol {
  Result<void> PutLolLobbyV1PartiesMetadata(const LeagueClient& _client, const LolLobbyPartyMemberMetadataDto& metadata)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/lol-lobby/v1/parties/metadata?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(metadata).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}