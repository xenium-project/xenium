// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2019, The Xenium Developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote
{
    struct CheckpointData
    {
        uint32_t index;
        const char *blockId;
    };

    const std::initializer_list<CheckpointData> CHECKPOINTS = {
        {     500, "b3d6ebdbdb030f40a1e1bd1176f4bc27611bc9c16c052632143e3df2a1bae9bc"},
        {    1000, "614b88604104e49e27270a6f37d97688c0c6db38fe70690f6901ed0a6ea9216a"},
        {    1500, "12abfc354f47b5d19d0d933bf0a5892294a76944a63a01d9473ff29f802657aa"},
        {    2000, "9fbb55a52d55099d944bcaa2f362569605cf7a5ae8b961c7d471d7854846547d"},
        {    2500, "f3c25decca4f522f110c66279cbb53673aa808cc9b11d6a52bcbeb7f15e9dbf0"},
        {    3000, "037b7af1dd7b5cd2db780f7efb720d5aad6e18d1978dafe761f12e9fd0aa508e"},
        {    3500, "e008c012aca935571b71d447bb2179fd656a014681436b93d095f62596aa77ea"},
        {    4000, "e628f5c4cfcb9334536dcff414bcd552716fd7c21fa4156e55fad3ab53c227a0"},
        {    4500, "9368641ed47b1ae1f2563bdf55ed802a62062d2b16f4296979cb15668424a422"},
        {    5000, "8ed9eeaf47fe20797c565aad0d60c030bc9eb0cec9927d4ada71787d25e0b649"},
        {    5500, "9dfe1b6301dfbee704424220773fa4263117c2b11aba330a493df59b5117d63f"},
        {    6000, "d99b3d92340f04ad39f73e8b1a3b30b0328338acda41ff1da825ad9d7b32ffe6"},
        {    6500, "ac70124b3cd10abaf069e0bdb230ad14e5013ab24d3044aeba7ece1da62b0716"},
        {    7000, "45381c375dbbc0d6d7e96fe1a1f1f88d5e6c64434f8e5b822fe6d6aa3f337bd7"},
        {    7500, "2cc464fba35741c86847b587f27c58ddbf61066aa10f5f6f5eb098b5fbc976a4"},
        {    8000, "60bd0d6d9d40bef93a3dac3f3b29067e9bcbbd0b920cec6a6a6497fbdfb50f4e"},
        {    8500, "c349b7ca1e107999a145cc97a65ef1abc420617889079e51c7b8c58b1e26d767"},
        {    9000, "5739482be45cee95025ccb0f798d723b4c316a29189414445f19770da8399ffe"},
    };
} // namespace CryptoNote
